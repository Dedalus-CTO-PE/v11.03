create table mrtthdaf
(
  mrthtmid    varchar2(4) default ' ' not null,
  mrthdesc    varchar2(35) default ' ' not null,
  mrthactv    varchar2(1) default ' ' not null,
  mrthspar    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtthdr1 primary key( 
mrthtmid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
