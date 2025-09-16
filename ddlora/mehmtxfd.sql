create table mehmtxaf
(
  mhmturno    varchar2(8) default ' ' not null,
  mhmttype    varchar2(3) default ' ' not null,
  mhmtnote    varchar2(6) default ' ' not null,
  mhmtuniq    varchar2(3) default ' ' not null,
  mhmtcmnt    varchar2(100) default ' ' not null,
  mhmtspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehmtxa1 primary key( 
mhmturno,
mhmttype,
mhmtnote,
mhmtuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
