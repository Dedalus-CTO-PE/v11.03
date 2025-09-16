create table sincceaf
(
sicecst     char(5),
sicecom     char(6),
sicedat     char(6),
siceamt     decimal(14,2),
sicebud     decimal(14,2),
sicespar    char(17),
lf          char(1)
);
create unique index sinccea1 on sincceaf
(
sicecst,
sicedat,
sicecom
);
create unique index sinccea2 on sincceaf
(
sicecst,
sicecom,
sicedat
);
revoke all on sincceaf from public ; 
grant select on sincceaf to public ; 
