create table mrthisaf
(
  mrhikey     varchar2(10) default ' ' not null,
  mrhidate    varchar2(8) default ' ' not null,
  mrhitime    varchar2(8) default ' ' not null,
  mrhiloc     varchar2(4) default ' ' not null,
  mrhirecv    varchar2(6) default ' ' not null,
  mrhireas    varchar2(4) default ' ' not null,
  mrhioper    varchar2(6) default ' ' not null,
  mrhiddue    varchar2(8) default ' ' not null,
  mrhistat    varchar2(1) default ' ' not null,
  mrhilock    varchar2(2) default ' ' not null,
  mrhireqb    varchar2(35) default ' ' not null,
  mrhiusid    varchar2(10) default ' ' not null,
  mrhiextn    varchar2(20) default ' ' not null,
  mrhipage    varchar2(20) default ' ' not null,
  mrhicomm    varchar2(50) default ' ' not null,
  mrhidhos    varchar2(3) default ' ' not null,
  mrhircst    varchar2(1) default ' ' not null,
  mrhircui    varchar2(10) default ' ' not null,
  mrhircdt    varchar2(8) default ' ' not null,
  mrhirctm    varchar2(8) default ' ' not null,
  mrhimovn    varchar2(10) default ' ' not null,
  mrhispar    varchar2(27) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrthisa1 primary key( 
mrhikey,
mrhidate,
mrhitime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mrthisa2 on mrthisaf
(
mrhistat,
mrhiddue,
mrhikey,
mrhidate,
mrhitime
)
  tablespace pas_indx; 
create unique index mrthisa3 on mrthisaf
(
mrhidate,
mrhitime,
mrhikey
)
  tablespace pas_indx; 
create unique index mrthisa4 on mrthisaf
(
mrhikey,
mrhidate,
mrhitime,
mrhidhos,
mrhiloc
)
  tablespace pas_indx; 
create unique index mrthisa5 on mrthisaf
(
mrhimovn,
mrhikey,
mrhidate,
mrhitime
)
  tablespace pas_indx; 
create unique index mrthisa6 on mrthisaf
(
mrhidate,
mrhitime,
mrhimovn,
mrhikey
)
  tablespace pas_indx; 
