create table patbmdaf
(
  ptbdward    varchar2(3) default ' ' not null,
  ptbdwbed    varchar2(3) default ' ' not null,
  ptbddate    varchar2(8) default ' ' not null,
  ptbdadtm    varchar2(5) default ' ' not null,
  ptbdlosm    varchar2(5) default ' ' not null,
  ptbdlosd    varchar2(3) default ' ' not null,
  ptbdoppe    varchar2(3) default ' ' not null,
  ptbdadmn    varchar2(8) default ' ' not null,
  ptbdstat    varchar2(1) default ' ' not null,
  ptbdover    varchar2(1) default ' ' not null,
  ptbdbrqn    varchar2(8) default ' ' not null,
  ptbdspar    varchar2(42) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patbmda1 primary key( 
ptbdward,
ptbdwbed,
ptbddate,
ptbdadtm,
ptbdoppe,
ptbdadmn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patbmda2 on patbmdaf
(
ptbdadmn,
ptbddate,
ptbdadtm,
ptbdward,
ptbdwbed,
ptbdoppe
)
  tablespace pas_indx; 
create unique index patbmda3 on patbmdaf
(
ptbdward,
ptbdwbed,
ptbdadmn,
ptbddate,
ptbdadtm,
ptbdoppe
)
  tablespace pas_indx; 
create unique index patbmda4 on patbmdaf
(
ptbdward,
ptbddate,
ptbdwbed,
ptbdoppe,
ptbdadmn,
ptbdadtm
)
  tablespace pas_indx; 
