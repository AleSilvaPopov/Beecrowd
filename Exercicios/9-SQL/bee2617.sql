SELECT
    pr.name,
    p.name
FROM
    providers AS p
JOIN
    products AS pr ON p.id = pr.id_providers
WHERE
    p.name = 'Ajax SA';