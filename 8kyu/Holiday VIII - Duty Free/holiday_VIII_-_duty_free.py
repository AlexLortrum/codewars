def duty_free(price, discount, holiday_cost):
    bottle_discount = (price*discount)/100
    holiday = holiday_cost/bottle_discount
    return int(holiday)
