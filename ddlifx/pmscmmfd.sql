create table pmscmmaf
(
pmcmcrcd    char(3),
pmcmcacc    char(14),
pmcmspar    char(80),
lf          char(1)
);
create unique index pmscmma1 on pmscmmaf
(
pmcmcrcd
);
revoke all on pmscmmaf from public ; 
grant select on pmscmmaf to public ; 
