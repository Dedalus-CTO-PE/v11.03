create table patrdcaf
(
  ptrccode    varchar2(9) default ' ' not null,
  ptrcdesc    varchar2(70) default ' ' not null,
  ptrcvrsn    varchar2(2) default ' ' not null,
  ptrcspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patrdca1 primary key( 
ptrccode,
ptrcvrsn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
