//Do not send attributes as parameters, they are already in the class.

//Call method outside of class:
objectName.methodName(parameters)

/*
Before next class, finish the sets and gets for the oil spill. Instructions in Playbook. Also, review the price example on page 52-53.
*/

clsItem
class clsItem
Variable Declarations 
   private string itemID
   private string name
   private num price
   private num numberLeft
   private date dateReceived

Other Set/Get attributes would be here

public void setNumberLeft(ByVal num pNumberLeft)
     this.NumberLeft = pNumberLeft
return

public num getNumberLeft()
return (this.NumberLeft)

private num HowLong() // Private means you cannot call it outside of this class
   Variable Declarations // Only private functions in an ideal world
      num daysOnShelf    
   use this.dateReceived and today’s date
   to determine daysOnShelf 
return daysOnShelf 

private num dropPrice(ByVal num percentToDrop)
   Variable Declarations
      num newPrice 
   Calculate newPrice
   Call the set to update this.price
return
 
public num putItemOnSale(ByVal num managerID)
   Variable Declarations
      num daysOnShelf    
      bool valid
   validate managerID
   if valid
     daysOnShelf = this.HowLong() // this. indicates the method is in the class, not outside
     if daysOnShelf < 100
        // Does nothing if days < 100, no change in price
     else
        if daysOnShelf between 100 and 200
           this.dropPrice(0.10)
        else
           this.dropPrice(0.20)
        end if
     end if
   end if
return this.price
end class

price.php
Variable Declarations
   clsItem coat
   string managerYesOrNoPrompt = "Are you a manager looking to 
                                initiate a sale? Enter y or n: "
   string managerIDPrompt = "Enter manager id number: "
   string isManager
   num price, numberLeft, managerID, newPrice
   string itemID, name 
   date dateReceived
   string newPriceMsg = "The new price of the "  

Assume pseudocode is here to read in item id number, name, price, number left and date received.

coat.setItemID (itemID)
coat.setName (name)
coat.setPrice (price)
coat.setNumberLeft (numberLeft)
coat.setDateReceived (dateReceived)

output managerYesOrNoPrompt
input isManager
if (isManager = "y")
   output managerIDPrompt
   input managerID
   newPrice = coat.putItemOnSale (managerID)
   output newPriceMsg coat.getName() " is " newPrice "."
end if
