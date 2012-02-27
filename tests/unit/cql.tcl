start_server {tags {"cql"}} {
    test {CQL - check that it starts with an empty filter list} {
        r filters
    } {}

    test {CQL - CQL filter registration} {
        r filter usd.monies "ticks.symbol any usd"
        r filters
    } {usd.monies {ticks.symbol any usd}}

    test {CQL - CQL multiple filter registration} {
        r filter usd.monies "ticks.symbol any usd"
        r filter eur.monies "ticks.symbol any eur"
        r filter chf.monies "ticks.symbol any chf"
        r filters
    } {eur.monies {ticks.symbol any eur} usd.monies {ticks.symbol any usd} chf.monies {ticks.symbol any chf}}

    test {CQL - bad CQL filter registration} {
        catch {r filter monies ""} err
        set _ $err
    } {ERR*invalid CQL query string: Unknown CQL error #-1}
}