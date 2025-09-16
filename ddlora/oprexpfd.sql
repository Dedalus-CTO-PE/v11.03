create table oprexpaf
(
  opexcode    varchar2(6) default ' ' not null,
  opexdesc    varchar2(30) default ' ' not null,
  opexrus     varchar2(3) default ' ' not null,
  opexmchg    varchar2(9) default ' ' not null,
  opexsicd    varchar2(7) default ' ' not null,
  opexactv    varchar2(1) default ' ' not null,
  opexspar    varchar2(3) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprexpa1 primary key( 
opexcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index oprexpa2 on oprexpaf
(
opexdesc,
opexcode
)
  tablespace pas_indx; 
