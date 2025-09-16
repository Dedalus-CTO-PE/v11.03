create table sinscdaf
(
  sisdcon     varchar2(10) default ' ' not null,
  sisdsup     varchar2(5) default ' ' not null,
  sisdcat     varchar2(7) default ' ' not null,
  sisdsdt     varchar2(8) default ' ' not null,
  sisdsut     varchar2(15) default ' ' not null,
  sisduc1     number(16,4) default 0 not null,
  sisduc2     number(16,4) default 0 not null,
  sisduc3     number(16,4) default 0 not null,
  sisduc4     number(16,4) default 0 not null,
  sisdbq1     number(14,2) default 0 not null,
  sisdbq2     number(14,2) default 0 not null,
  sisdbq3     number(14,2) default 0 not null,
  sisdmqt     number(14,2) default 0 not null,
  sisdpo1     varchar2(60) default ' ' not null,
  sisdpo2     varchar2(60) default ' ' not null,
  sisdur1     varchar2(15) default ' ' not null,
  sisdur2     varchar2(15) default ' ' not null,
  sisdud1     varchar2(8) default ' ' not null,
  sisdud2     varchar2(8) default ' ' not null,
  sisduy1     varchar2(1) default ' ' not null,
  sisduy2     varchar2(1) default ' ' not null,
  sisdspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinscda1 primary key( 
sisdcon,
sisdsup,
sisdcat,
sisdsdt,
sisdsut)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinscda2 on sinscdaf
(
sisdcat,
sisdsdt,
sisdsup,
sisdcon,
sisdsut
)
  tablespace pas_indx; 
create unique index sinscda3 on sinscdaf
(
sisdsup,
sisdcat,
sisdsdt,
sisdcon,
sisdsut
)
  tablespace pas_indx; 
