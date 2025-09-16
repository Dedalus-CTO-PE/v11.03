create table pmsebhaf
(
pmebbthn    varchar2(8),
pmebhfnd    varchar2(6),
pmebbhtl    number(14,2),
pmebtrib    number(6,0),
pmebdtbc    varchar2(8),
pmebtmbc    varchar2(8),
pmeboper    varchar2(10),
dpmebeet    varchar2(1),
pmebefnm    varchar2(18),
pmeblocn    varchar2(8),
pmebsnid    varchar2(60),
pmebspar    varchar2(20),
lf          varchar2(1),
constraint pmsebha1 primary key( 
pmebbthn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsebhaf for pmsebhaf;
create unique index pmsebha2 on pmsebhaf
(
pmebdtbc,
pmebbthn
)
  tablespace pas_indx; 
