def score(dice):
    list_dice = list(dice)
    one_point = list_dice.count(1)
    two_point = list_dice.count(2)
    three_point = list_dice.count(3)
    four_point = list_dice.count(4)
    five_point = list_dice.count(5)
    six_point = list_dice.count(6)
    score = 0


    if one_point > 3:#If there is a remainder
        one_point -= 2
        score += 200
        if one_point < 3:#If an adjustment is needed
            one_point = 3
            score -= 100

    if two_point > 3:#Removing the remainder
        two_point = 3
    if three_point > 3:
        three_point = 3
    if four_point > 3:
        four_point = 3
    if six_point > 3:
        six_point = 3

    if five_point > 3:#If there is a remainder
        five_point -= 2
        score += 100
        if five_point < 3:#If an adjustment is needed
            five_point = 3
            score -= 50


    if one_point == 3:#Scoring
        score += 1000
    if six_point == 3:
        score += 600
    if five_point == 3:
        score += 500
    if four_point == 3:
        score += 400
    if three_point == 3:
        score += 300
    if two_point == 3:
        score += 200
    if one_point == 1:
        score += 100
    if five_point == 1:
        score += 50

    if one_point == 2:#If there are more than one leftovers
        score += 200
    if five_point == 2:
        score += 100

    return score
