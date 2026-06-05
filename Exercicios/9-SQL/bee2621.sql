SELECT 
    p.name
FROM
    products AS p
JOIN
    providers AS pr ON p.id_providers = pr.id
WHERE
    p.amount > 10 AND p.amount < 20
    AND pr.name LIKE 'P%'