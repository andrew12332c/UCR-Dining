#include "../include/BuildDiningHalls.h"

DiningHall BuildDiningHalls::buildGlasgow(){
    Ingredient cauliflower("Cauliflower", 140, 11);
    Ingredient tortilla("Tortilla", 450, 14);
    Ingredient hotSauce("Hot Sauce", 0, 0);
    vector<Ingredient> buffaloCauliflowerIngredients = {cauliflower, tortilla, hotSauce};

    Ingredient chicken("Chicken", 335, 38);
    vector<Ingredient> grilledChickenIngredients = {chicken};

    Ingredient clam("Clam", 270, 20);
    Ingredient heavyCream("Heavy Cream", 400, 1);
    Ingredient potato("Potato", 200, 8);
    Ingredient onion("Onion", 110, 4);
    vector<Ingredient> clamChowderIngredients = {clam, heavyCream, potato, onion};

    Ingredient cheese("Cheese", 150, 14);
    Ingredient steak("Steak", 375, 40);
    vector<Ingredient> steakQuesadillaIngredients = {steak, cheese, tortilla};

    Ingredient carrot("Carrot", 50, 2);
    vector<Ingredient> steamedCarrotIngredients = {carrot};

    Ingredient seasoning("Seasoning", 15, 0);    
    vector<Ingredient> friesIngredients = {potato, seasoning};

    Ingredient cod("Cod", 250, 20);
    Ingredient batter("Batter", 80, 1);
    Ingredient bread("Bread", 140, 2);
    Ingredient tartar("Tartar Sauce", 40, 0);
    vector<Ingredient> fishSliderIngredients = {cod, batter, bread, tartar};

    Ingredient tomatoSauce("Tomato Sauce", 50, 0);
    Ingredient pepperoni("Pepperoni Slices", 40, 10);
    vector<Ingredient> pepperoniPizzaIngredients = {bread, cheese, tomatoSauce, pepperoni};

    Ingredient veganCheese("Vegan Cheddar Cheese", 80, 6);
    vector<Ingredient> veganGrilledCheeseIngredients = {veganCheese, bread};
    
    Ingredient quinoa("Quinoa", 40, 3);
    Ingredient vegatableSoupBase("Vegetable Soup Base", 25, 1);
    vector<Ingredient> redQuinoaIngredients = {quinoa, vegatableSoupBase};

    Ingredient cilantro("Cilantro", 20, 0);
    Ingredient limeJuice("Lime Juice", 10, 0);
    Ingredient rice("Rice", 25, 2);
    vector<Ingredient> cilantroLimeRiceIngredients = {cilantro, limeJuice, rice};

    Ingredient salmonFillet("Salmon Fillet", 250, 20);
    Ingredient oliveOil("Olive Oil", 10, 0);
    Ingredient paprika("Paprika", 5, 0);
    Ingredient salt("Kosher Salt", 5, 0);
    vector<Ingredient> salmonCharmoulaIngredients = {salmonFillet, cilantro, oliveOil, paprika, salt};

    Ingredient enchiladaSauce("Enchilida Sauce", 20, 0);
    vector<Ingredient> chickenTingaIngredients = {tomatoSauce, chicken, enchiladaSauce, salt};

    vector<Ingredient> cornTortillaIngredients = {tortilla};

    Ingredient broccoli("Broccoli", 30, 1);
    vector<Ingredient> steamedBroccoliIngredients = {broccoli};

    Ingredient cookieDough("Cookie Dough Carnival", 50, 1);
    Ingredient chocolateChips("Chocolate Chips", 20, 1);
    Ingredient mnms("MnMs", 30, 1);
    vector<Ingredient> assortedCookiesIngredients = {cookieDough, chocolateChips, mnms};

    DiningHallDish buffaloCauliflower("Buffalo Cauliflower Wrap", buffaloCauliflowerIngredients, 50);
    DiningHallDish grilledChicken("Halal Grilled Chicken", grilledChickenIngredients, 60);
    DiningHallDish clamChowder("New England Clam Chowder", clamChowderIngredients, 75);
    DiningHallDish steakQuesadilla("Pepperjack Steak Quesadilla", steakQuesadillaIngredients, 50);
    DiningHallDish steamedCarrots("Steamed Carrots", steamedCarrotIngredients, 10);
    DiningHallDish fries("Shoestring Fries", friesIngredients, 10);
    DiningHallDish fishSlider("English Pub Style Fish", fishSliderIngredients, 60);
    DiningHallDish pepperoniPizza("Classic Pepperoni Pizza", pepperoniPizzaIngredients, 30);
    DiningHallDish veganGrilledCheese("Vegan Grilled Cheese", veganGrilledCheeseIngredients, 40);
    DiningHallDish redQuinoa("Red Quinoa", redQuinoaIngredients, 20);
    DiningHallDish cilantroLimeRice("Cilantro Lime Rice", cilantroLimeRiceIngredients, 20);
    DiningHallDish salmonCharmoula("Salmon Charmoula", salmonCharmoulaIngredients, 60);
    DiningHallDish chickenTinga("Chicken Tinga", chickenTingaIngredients, 45);
    DiningHallDish cornTortilla("Corn Tortilla", cornTortillaIngredients, 10);
    DiningHallDish steamedBroccoli("Steamed Broccoli", steamedBroccoliIngredients, 15);
    DiningHallDish assortedCookies("Assorted Cookies", assortedCookiesIngredients, 20);

    vector<DiningHallDish> menuItems = {buffaloCauliflower, grilledChicken, clamChowder, steakQuesadilla, steamedCarrots, fries, fishSlider, pepperoniPizza, veganGrilledCheese, redQuinoa, cilantroLimeRice, salmonCharmoula, chickenTinga, cornTortilla, steamedBroccoli, assortedCookies};
    
    DiningHall Glasgow("Glasgow", "680 W Linden St, Riverside, CA 92507", menuItems);
    return Glasgow;
}

DiningHall BuildDiningHalls::buildLothian(){

    Ingredient chicken("Chicken", 335, 38);
    vector<Ingredient> grilledChickenIngredients = {chicken};

    Ingredient rice("Rice", 25, 2);
    vector<Ingredient> jasmineRiceIngredients = {rice};

    Ingredient currySauce("Thai Jungle Curry Sauce", 120, 8);
    Ingredient pureeGinger("Puree Ginger", 20, 0);
    Ingredient bambooShoot("Jackpot Bamboo Shoot", 40, 0);
    vector<Ingredient> chickenThaiJungleCurryIngredients = {chicken, currySauce, pureeGinger, bambooShoot};

    Ingredient cheese("Cheese", 150, 14);
    Ingredient tomatoSauce("Tomato Sauce", 50, 0);
    Ingredient bread("Bread", 140, 2);
    vector<Ingredient> cheesePizzaIngredients = {bread, cheese, tomatoSauce};

    Ingredient potato("Potato", 200, 8);
    Ingredient seasoning("Seasoning", 15, 0);    
    vector<Ingredient> friesIngredients = {potato, seasoning};

    Ingredient carrot("Carrot", 50, 2);
    vector<Ingredient> steamedCarrotIngredients = {carrot};

    Ingredient corn("corn", 50, 2);
    vector<Ingredient> steamedCornIngredients = {corn};

    Ingredient triTip("Beef Tri Tip", 250, 26);
    Ingredient adoboRub("Adobo Rub", 40, 2);
    vector<Ingredient> adoboTriTipIngredients = {tomatoSauce, triTip, adoboRub};

    Ingredient chickenMarinade("Chicken Marinade", 40, 0);
    Ingredient bacon("Bacon", 140, 16);
    Ingredient thymeSpice("Thyme Spice", 30, 0);
    vector<Ingredient> clubSandwichIngredients = {chicken, cheese, bread, chickenMarinade, bacon, thymeSpice};

    Ingredient chickenSoupBase("Chicken Soup Base", 80, 4);
    Ingredient noodles("Noodles", 30, 1);
    vector<Ingredient> chickenNoodleSoupIngredients = {chicken, chickenSoupBase, noodles, carrot};

    vector<Ingredient> cornBreadIngredients = {corn, bread};

    Ingredient tomato("Tomato", 40, 1);
    Ingredient lettuce("Lettuce", 25, 0);
    Ingredient turkey("Turkey", 220, 24);
    vector<Ingredient> turkeyBurgerIngredients = {bread, cheese, tomato, lettuce, turkey};

    Ingredient porkButt("Pork Butt", 225, 16);
    Ingredient knorrSauceGlace("Knorr Sauce Demi Glace", 50, 2);
    Ingredient paprika("Paprika", 5, 0);
    Ingredient onionPowder("Onion Powder", 5, 0);
    vector<Ingredient> kaluaPorkIngredients = {porkButt, knorrSauceGlace, paprika, onionPowder};

    Ingredient water("Water", 0, 0);
    Ingredient raspberryGelatin("Raspberry Gelatin", 40, 0);
    vector<Ingredient> raspberryJelloIngredients = {water, raspberryGelatin};

    Ingredient cookieDough("Cookie Dough Carnival", 50, 1);
    Ingredient chocolateChips("Chocolate Chips", 20, 1);
    Ingredient mnms("MnMs", 30, 1);
    vector<Ingredient> assortedCookiesIngredients = {cookieDough, chocolateChips, mnms};

    DiningHallDish grilledChicken("Halal Grilled Chicken", grilledChickenIngredients, 60);
    DiningHallDish jasmineRice("Jasmine Rice",  jasmineRiceIngredients, 20);
    DiningHallDish chickenThaiJungleCurry("Chicken Thai Jungle Curry", chickenThaiJungleCurryIngredients, 75);
    DiningHallDish cheesePizza("Cheese Pizza", cheesePizzaIngredients, 40);
    DiningHallDish fries("Shoestring Fries", friesIngredients, 10);
    DiningHallDish steamedCarrots("Steamed Carrots", steamedCarrotIngredients, 10);
    DiningHallDish steamedCorn("Steamed Corn", steamedCornIngredients, 10);
    DiningHallDish adoboTripTip("Adobo Tri Tip", adoboTriTipIngredients, 50);
    DiningHallDish clubSandwich("Grilled Chicken Club Sandwich", clubSandwichIngredients, 60);
    DiningHallDish chickenNoodleSoup("Chicken Noodle Soup", chickenNoodleSoupIngredients, 45);
    DiningHallDish cornBread("Corn Bread", cornBreadIngredients, 15);
    DiningHallDish turkeyBurger("Turkey Burger", turkeyBurgerIngredients, 45);
    DiningHallDish kaluaPork("Kalua Pork", kaluaPorkIngredients, 50);
    DiningHallDish raspberryJello("Raspberry Jello", raspberryJelloIngredients, 15);
    DiningHallDish assortedCookies("Assorted Cookies", assortedCookiesIngredients, 20);


    vector<DiningHallDish> menuItems = {grilledChicken, jasmineRice, chickenThaiJungleCurry, cheesePizza, fries, steamedCarrots, steamedCorn, adoboTripTip, clubSandwich, chickenNoodleSoup, cornBread, turkeyBurger, kaluaPork, raspberryJello, assortedCookies};
    
    DiningHall Lothian("Lothian", "500 W Big Springs Rd, Riverside, CA 92507", menuItems);
    return Lothian;
}