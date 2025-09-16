create table patlg1af
(
ptlgpost    char(8),
ptlglgac    char(4),
ptlgspre    char(17),
lf          char(1)
);
create unique index patlg1a1 on patlg1af
(
ptlgpost,
ptlglgac
);
revoke all on patlg1af from public ; 
grant select on patlg1af to public ; 
