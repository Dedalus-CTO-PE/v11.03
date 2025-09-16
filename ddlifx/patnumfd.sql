create table patnumwr
(
pward       char(3),
pdate       char(6),
padmn       decimal(6,0),
ptrin       decimal(6,0),
ptrout      decimal(6,0),
pdsch       decimal(6,0),
pleav       decimal(6,0),
pretn       decimal(6,0),
lf          char(1)
);
create unique index patnumw1 on patnumwr
(
pward,
pdate
);
revoke all on patnumwr from public ; 
grant select on patnumwr to public ; 
