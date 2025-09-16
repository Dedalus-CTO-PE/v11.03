create table pmsieraf
(
  pmirrtyp    varchar2(2) default ' ' not null,
  pmircode    varchar2(50) default ' ' not null,
  pmirinum    varchar2(20) default ' ' not null,
  pmirrdat    varchar2(8) default ' ' not null,
  pmirrtim    varchar2(8) default ' ' not null,
  pmirruid    varchar2(10) default ' ' not null,
  pmirecod    varchar2(4) default ' ' not null,
  pmiremes    varchar2(200) default ' ' not null,
  pmirspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsiera1 primary key( 
pmirrtyp,
pmircode,
pmirinum,
pmirrdat,
pmirrtim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsiera2 on pmsieraf
(
pmirrdat,
pmirrtim,
pmirrtyp,
pmircode,
pmirinum
)
  tablespace pas_indx; 
create unique index pmsiera3 on pmsieraf
(
pmirinum,
pmirrdat,
pmirrtim,
pmirrtyp,
pmircode
)
  tablespace pas_indx; 
