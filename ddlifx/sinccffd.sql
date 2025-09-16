create table sinccfaf
(
sicfcst     char(5),
sicfsub     char(5),
sicfdat     char(6),
sicfamt     decimal(14,2),
sicfbud     decimal(14,2),
sicfspar    char(18),
lf          char(1)
);
create unique index sinccfa1 on sinccfaf
(
sicfcst,
sicfdat,
sicfsub
);
create unique index sinccfa2 on sinccfaf
(
sicfcst,
sicfsub,
sicfdat
);
revoke all on sinccfaf from public ; 
grant select on sinccfaf to public ; 
