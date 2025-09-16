create table deblinaf
(
  dblndeb     varchar2(8) default ' ' not null,
  dblnna1     varchar2(35) default ' ' not null,
  dblnna2     varchar2(35) default ' ' not null,
  dblnad1     varchar2(35) default ' ' not null,
  dblnad2     varchar2(35) default ' ' not null,
  dblnad3     varchar2(35) default ' ' not null,
  dblnad4     varchar2(35) default ' ' not null,
  dblnpc      varchar2(8) default ' ' not null,
  dblnph1     varchar2(20) default ' ' not null,
  dblnph2     varchar2(20) default ' ' not null,
  dblnph3     varchar2(20) default ' ' not null,
  dblncon     varchar2(30) default ' ' not null,
  dblnact     number(1,0) default 0 not null,
  dblnsta     number(1,0) default 0 not null,
  dblntex     number(1,0) default 0 not null,
  dblnter     varchar2(3) default ' ' not null,
  dblnwrn     varchar2(3) default ' ' not null,
  dblnlin     varchar2(8) default ' ' not null,
  dblnpur     varchar2(8) default ' ' not null,
  dblnbad     number(1,0) default 0 not null,
  dblnclm     number(14,2) default 0 not null,
  dblnur1     varchar2(25) default ' ' not null,
  dblnur2     varchar2(25) default ' ' not null,
  dblnud1     varchar2(8) default ' ' not null,
  dblnud2     varchar2(8) default ' ' not null,
  dblnuy1     varchar2(1) default ' ' not null,
  dblnuy2     varchar2(1) default ' ' not null,
  dblnuc1     varchar2(3) default ' ' not null,
  dblnuc2     varchar2(3) default ' ' not null,
  dblnuc3     varchar2(3) default ' ' not null,
  dblnuc4     varchar2(3) default ' ' not null,
  dblnspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint deblina1 primary key( 
dblndeb)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index deblina2 on deblinaf
(
dblnna1,
dblndeb
)
  tablespace pas_indx; 
