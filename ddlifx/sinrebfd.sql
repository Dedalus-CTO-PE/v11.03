create table sinrebaf
(
sirbtyp     char(1),
sirbreq     char(7),
sirbwar     char(5),
sirbcat     char(7),
sirbrqt     decimal(14,2),
sirbiqt     decimal(14,2),
sirbamt     decimal(14,2),
sirbdat     char(8),
sirbbch     char(5),
sirbled     char(2),
sirbacc     char(12),
sirbspa     char(11),
lf          char(1)
);
create unique index sinreba1 on sinrebaf
(
sirbtyp,
sirbreq,
sirbwar,
sirbcat
);
create unique index sinreba2 on sinrebaf
(
sirbcat,
sirbtyp,
sirbreq,
sirbwar
);
create unique index sinreba3 on sinrebaf
(
sirbbch,
sirbled,
sirbacc,
sirbtyp,
sirbreq,
sirbwar,
sirbcat
);
create unique index sinreba4 on sinrebaf
(
sirbdat,
sirbtyp,
sirbreq,
sirbwar,
sirbcat
);
revoke all on sinrebaf from public ; 
grant select on sinrebaf to public ; 
