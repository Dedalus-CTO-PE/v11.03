create table patbrdaf
(
  ptbrbrdn    varchar2(10) default ' ' not null,
  ptbrurno    varchar2(8) default ' ' not null,
  ptbrvisn    varchar2(8) default ' ' not null,
  ptbrcntr    varchar2(2) default ' ' not null,
  ptbrlurn    varchar2(8) default ' ' not null,
  ptbrtitl    varchar2(4) default ' ' not null,
  ptbrsnam    varchar2(35) default ' ' not null,
  ptbrgnam    varchar2(35) default ' ' not null,
  ptbrgend    varchar2(1) default ' ' not null,
  ptbrbdat    varchar2(8) default ' ' not null,
  ptbradr1    varchar2(35) default ' ' not null,
  ptbradr2    varchar2(35) default ' ' not null,
  ptbradr3    varchar2(35) default ' ' not null,
  ptbradr4    varchar2(35) default ' ' not null,
  ptbrpost    varchar2(8) default ' ' not null,
  ptbrhphn    varchar2(20) default ' ' not null,
  ptbrwphn    varchar2(20) default ' ' not null,
  ptbrmphn    varchar2(20) default ' ' not null,
  ptbremal    varchar2(50) default ' ' not null,
  ptbrhosp    varchar2(3) default ' ' not null,
  ptbrsdat    varchar2(8) default ' ' not null,
  ptbrstim    varchar2(8) default ' ' not null,
  ptbredat    varchar2(8) default ' ' not null,
  ptbretim    varchar2(8) default ' ' not null,
  ptbrcusr    varchar2(10) default ' ' not null,
  ptbrcdat    varchar2(8) default ' ' not null,
  ptbrctim    varchar2(8) default ' ' not null,
  ptbruusr    varchar2(10) default ' ' not null,
  ptbrudat    varchar2(8) default ' ' not null,
  ptbrutim    varchar2(8) default ' ' not null,
  ptbrspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patbrda1 primary key( 
ptbrbrdn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patbrda2 on patbrdaf
(
ptbrurno,
ptbrbrdn
)
  tablespace pas_indx; 
create unique index patbrda3 on patbrdaf
(
ptbrvisn,
ptbrbrdn,
ptbrurno
)
  tablespace pas_indx; 
create unique index patbrda4 on patbrdaf
(
ptbrhosp,
ptbrbrdn
)
  tablespace pas_indx; 
