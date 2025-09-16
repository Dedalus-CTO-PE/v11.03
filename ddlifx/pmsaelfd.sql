create table pmsaelaf
(
pmaevisn    char(8),
pmaequot    char(12),
pmaespar    char(30),
lf          char(1)
);
create unique index pmsaela1 on pmsaelaf
(
pmaevisn,
pmaequot
);
create unique index pmsaela2 on pmsaelaf
(
pmaequot,
pmaevisn
);
revoke all on pmsaelaf from public ; 
grant select on pmsaelaf to public ; 
