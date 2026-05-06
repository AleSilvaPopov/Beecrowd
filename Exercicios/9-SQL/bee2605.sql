select
    p.name,
    pr.name
from 
    products as p
join
    providers as pr ON p.id_providers = pr.id
where 
    p.id_categories = 6;