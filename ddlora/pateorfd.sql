create table pateoraf
(
  ptertype    varchar2(1) default ' ' not null,
  ptercode    varchar2(6) default ' ' not null,
  ptername    varchar2(30) default ' ' not null,
  pteradd1    varchar2(35) default ' ' not null,
  pteradd2    varchar2(35) default ' ' not null,
  pteradd3    varchar2(35) default ' ' not null,
  pteradd4    varchar2(35) default ' ' not null,
  pterpost    varchar2(8) default ' ' not null,
  ptertelp    varchar2(20) default ' ' not null,
  ptercont    varchar2(30) default ' ' not null,
  pterstat    varchar2(1) default ' ' not null,
  ptersect    varchar2(3) default ' ' not null,
  pterregn    varchar2(3) default ' ' not null,
  pterutyp    varchar2(3) default ' ' not null,
  pterspar    varchar2(21) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pateora1 primary key( 
ptertype,
ptercode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pateora2 on pateoraf
(
ptercode,
ptertype
)
  tablespace pas_indx; 
