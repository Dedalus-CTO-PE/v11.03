create table pmsaelaf
(
pmaevisn    varchar2(8),
pmaequot    varchar2(12),
pmaespar    varchar2(30),
lf          varchar2(1),
constraint pmsaela1 primary key( 
pmaevisn,
pmaequot)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsaelaf for pmsaelaf;
create unique index pmsaela2 on pmsaelaf
(
pmaequot,
pmaevisn
)
  tablespace pas_indx; 
