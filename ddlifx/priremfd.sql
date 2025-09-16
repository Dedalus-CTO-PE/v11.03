create table priremaf
(
prrmseid    char(4),
prrmsedc    char(35),
prrmdbfr    char(9),
prrmdbto    char(9),
prrmmpfr    char(6),
prrmmpto    char(6),
prrminfr    char(9),
prrminto    char(9),
prrmidfr    char(8),
prrmidto    char(8),
prrmccfr    char(3),
prrmccto    char(3),
prrmmbal    decimal(10,2),
prrmmscd    char(3),
prrmscan    char(1),
prrmspar    char(21),
lf          char(1)
);
create unique index prirema1 on priremaf
(
prrmseid
);
revoke all on priremaf from public ; 
grant select on priremaf to public ; 
