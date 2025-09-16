create table pmsebhaf
(
pmebbthn    char(8),
pmebhfnd    char(6),
pmebbhtl    decimal(14,2),
pmebtrib    decimal(6,0),
pmebdtbc    char(8),
pmebtmbc    char(8),
pmeboper    char(10),
dpmebeet    char(1),
pmebefnm    char(18),
pmeblocn    char(8),
pmebsnid    char(60),
pmebspar    char(20),
lf          char(1)
);
create unique index pmsebha1 on pmsebhaf
(
pmebbthn
);
create unique index pmsebha2 on pmsebhaf
(
pmebdtbc,
pmebbthn
);
revoke all on pmsebhaf from public ; 
grant select on pmsebhaf to public ; 
