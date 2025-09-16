create table watexaaf
(
wtxanlv1    char(10),
wtxanlep    decimal(6,0),
wtxantl1    decimal(16,4),
wtxanmn1    decimal(14,2),
wtxanmx1    decimal(14,2),
wtxansv1    decimal(16,4),
wtxantl2    decimal(16,4),
wtxanmn2    decimal(14,2),
wtxanmx2    decimal(14,2),
wtxansv2    decimal(16,4),
wtxantl3    decimal(16,4),
wtxanmn3    decimal(14,2),
wtxanmx3    decimal(14,2),
wtxansv3    decimal(16,4),
wtxanspa    char(39),
lf          char(1)
);
create unique index watexaa1 on watexaaf
(
wtxanlv1
);
revoke all on watexaaf from public ; 
grant select on watexaaf to public ; 
