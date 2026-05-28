SELECT
    c.name,
    r.rentals_date
FROM 
    customers AS c
JOIN
    rentals AS r ON r.id_customers = c.id
WHERE
    r.rentals_date >= '2016-09-1' AND r.rentals_date <= '2016-09-30'