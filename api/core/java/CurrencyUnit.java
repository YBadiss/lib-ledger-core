// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from currency.djinni

package co.ledger.core;

public final class CurrencyUnit {


    /*package*/ final String name;

    /*package*/ final String symbol;

    /*package*/ final String code;

    /*package*/ final int numberOfDecimal;

    public CurrencyUnit(
            String name,
            String symbol,
            String code,
            int numberOfDecimal) {
        this.name = name;
        this.symbol = symbol;
        this.code = code;
        this.numberOfDecimal = numberOfDecimal;
    }

    public String getName() {
        return name;
    }

    public String getSymbol() {
        return symbol;
    }

    public String getCode() {
        return code;
    }

    public int getNumberOfDecimal() {
        return numberOfDecimal;
    }

    @Override
    public String toString() {
        return "CurrencyUnit{" +
                "name=" + name +
                "," + "symbol=" + symbol +
                "," + "code=" + code +
                "," + "numberOfDecimal=" + numberOfDecimal +
        "}";
    }

}