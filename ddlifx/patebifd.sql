create table patebiaf
(
pteibthn    char(8),
pteiinvn    char(8),
pteispar    char(33),
lf          char(1)
);
create unique index patebia1 on patebiaf
(
pteibthn,
pteiinvn
);
create unique index patebia2 on patebiaf
(
pteiinvn,
pteibthn
);
revoke all on patebiaf from public ; 
grant select on patebiaf to public ; 
