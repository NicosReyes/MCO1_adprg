/*
********************
Last names: Reyes, Ching
Language: Kotlin
Paradigm(s):
********************
*/

import java.util.Scanner

class Main {
    private var accName: String = "Dela Cruz, Juan"
    private val scanner = Scanner(System.`in`)

    fun start() {
        while (true) {
            when (mainMenu()) {
                1 -> registerAcc()
                2 -> deposit()
                3 -> withdraw()
                4 -> currEx()
                5 -> recordCurrEx()
                6 -> showInterest()
                else -> println("Invalid Choice!\n")
            }
        }
    }

    private fun mainMenu(): Int {
        print(
            """
            Select Transaction:
            [1] Register Account Name
            [2] Deposit Amount
            [3] Withdraw Amount
            [4] Currency Exchange
            [5] Record Exchange Rates
            [6] Show Interest Amount
            
            Choice: 
            """.trimIndent()
        )

        val choice = scanner.nextInt()
        println("\n\n***\nChoice: $choice\n")

        return choice
    }

    private fun registerAcc() {
        print(
            """
            Register Account Name
            
            Account Name: 
            """.trimIndent()
        )

        // Clear buffer before reading line
        scanner.nextLine()
        accName = scanner.nextLine()

        println("\n\n***\nAccount Name: $accName\n")
    }

    private fun deposit() {
        print(
            """
            Deposit Amount
            Account Name: $accName
            Current Balance: 1000.00
            Currency: PHP
            
            
            """.trimIndent()
        )

        print("Deposit Amount: ")
        val depositAmount = scanner.nextFloat()

        println(
            """
            
            
            ***
            Account Name: $accName
            Deposit Amount: ${"%.2f".format(depositAmount)}
            
            """.trimIndent()
        )
    }

    private fun withdraw() {
        print(
            """
            Withdraw Amount
            Account Name: $accName
            Current Balance: 1000.00
            Currency: PHP
            
            
            """.trimIndent()
        )

        print("Withdraw Amount: ")
        val withdrawAmount = scanner.nextFloat()

        println(
            """
            
            
            ***
            Account Name: $accName
            Withdraw Amount: ${"%.2f".format(withdrawAmount)}
            
            """.trimIndent()
        )
    }

    private fun currEx() {
        print(
            """
            Foreign Currency Exchange
            Source Amount (PHP): 1000.00
            
            Exchanged Currency
            [1] Philippine Peso (PHP) = 1000.00
            [2] United States Dollar (USD) = 62000.00
            [3] Japanese Yen (JPY) = 400.00
            [4] British Pound Sterling (GBP) = 84000.00
            [5] Euro (EUR) = 72000.00
            [6] Chinese Yuan Renminbi (CNY) = 9000.00
            
            ***
            Source Currency = Philippine Peso (PHP)
            Source Amount (PHP) = 1000.00
            
            
            """.trimIndent()
        )
    }

    private fun recordCurrEx() {
        print(
            """
            Record Exchange Rate
            [1] Philippine Peso (PHP)
            [2] United States Dollar (USD)
            [3] Japanese Yen (JPY)
            [4] British Pound Sterling (GBP)
            [5] Euro (EUR)
            [6] Chinese Yuan Renminbi (CNY)
            
            
            """.trimIndent()
        )

        print("Select Foreign Currency: ")
        val curr = scanner.nextInt()

        print("Exchange Rate: ")
        val rate = scanner.nextFloat()

        println(
            """
            
            
            ***
            Select Foreign Currency: $curr
            Exchange Rate: ${"%.2f".format(rate)}
            
            """.trimIndent()
        )
    }

    private fun showInterest() {
        println("WIP\n")
    }
}

fun main() {
    val app = Main()
    app.start()
}