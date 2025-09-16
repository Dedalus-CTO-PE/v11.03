create table pmsregaf
(
  pmreregm    varchar2(10) default ' ' not null,
  pmreuniq    varchar2(3) default ' ' not null,
  pmredesc    varchar2(40) default ' ' not null,
  pmreityp    varchar2(1) default ' ' not null,
  pmreitmn    varchar2(10) default ' ' not null,
  pmreactv    varchar2(1) default ' ' not null,
  pmreelos    varchar2(3) default ' ' not null,
  pmresncd    varchar2(3) default ' ' not null,
  pmrebtyp    varchar2(3) default ' ' not null,
  pmrespar    varchar2(51) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsrega1 primary key( 
pmreregm,
pmreuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsregaf for pmsregaf;
create unique index pmsrega2 on pmsregaf
(
pmreuniq,
pmreregm
)
  tablespace pas_indx; 
create unique index pmsrega3 on pmsregaf
(
pmreuniq,
pmredesc,
pmreregm
)
  tablespace pas_indx; 
create unique index pmsrega4 on pmsregaf
(
pmreregm,
pmreitmn,
pmreityp,
pmreuniq
)
  tablespace pas_indx; 
