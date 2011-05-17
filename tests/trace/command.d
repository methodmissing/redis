#!/usr/sbin/dtrace -Zqs

dtrace:::BEGIN
{
  printf("Tracing... Hit Ctrl-C to end.\n");
}

redis$target:::command-entry
{
  self->ts = timestamp;
  self->cmd = copyinstr(arg0);
}

redis$target:::command-return
/self->ts/
{
  @edist[self->cmd] = quantize((timestamp - self->ts) / 1000);
}

dtrace:::END
{
  printa(@edist);
}