BEGIN { 
    print "--- Employee Report ---"
    total = 0 
    count = 0
}
{
    # Print Name ($2) and Salary ($3) [cite: 253]
    print "Name: " $2 "\tSalary: " $3
    
    total += $3
    count++

    # Condition: Salary > 6000 [cite: 303]
    if ($3 > 6000) {
        print "  -> High Earner: " $2
    }

    # OR Condition: Fail if any mark < 45 [cite: 326, 327]
    if ($5 < 45 || $6 < 45 || $7 < 45) {
        print "  -> Result: Fail"
    } else {
        print "  -> Result: Pass"
    }
}
END {
    print "-----------------------"
    print "Total Salary = " total
    print "Average Salary = " total/count
}
