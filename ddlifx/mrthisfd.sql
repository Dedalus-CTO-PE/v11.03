create table mrthisaf
(
  mrhikey     char(10) default ' ' not null,
  mrhidate    char(8) default ' ' not null,
  mrhitime    char(8) default ' ' not null,
  mrhiloc     char(4) default ' ' not null,
  mrhirecv    char(6) default ' ' not null,
  mrhireas    char(4) default ' ' not null,
  mrhioper    char(6) default ' ' not null,
  mrhiddue    char(8) default ' ' not null,
  mrhistat    char(1) default ' ' not null,
  mrhilock    char(2) default ' ' not null,
  mrhireqb    char(35) default ' ' not null,
  mrhiusid    char(10) default ' ' not null,
  mrhiextn    char(20) default ' ' not null,
  mrhipage    char(20) default ' ' not null,
  mrhicomm    char(50) default ' ' not null,
  mrhidhos    char(3) default ' ' not null,
  mrhircst    char(1) default ' ' not null,
  mrhircui    char(10) default ' ' not null,
  mrhircdt    char(8) default ' ' not null,
  mrhirctm    char(8) default ' ' not null,
  mrhimovn    char(10) default ' ' not null,
  mrhispar    char(27) default ' ' not null,
  lf          char(1)
);
create unique index mrthisa1 on mrthisaf
(
mrhikey,
mrhidate,
mrhitime
);
create unique index mrthisa2 on mrthisaf
(
mrhistat,
mrhiddue,
mrhikey,
mrhidate,
mrhitime
);
create unique index mrthisa3 on mrthisaf
(
mrhidate,
mrhitime,
mrhikey
);
create unique index mrthisa4 on mrthisaf
(
mrhikey,
mrhidate,
mrhitime,
mrhidhos,
mrhiloc
);
create unique index mrthisa5 on mrthisaf
(
mrhimovn,
mrhikey,
mrhidate,
mrhitime
);
create unique index mrthisa6 on mrthisaf
(
mrhidate,
mrhitime,
mrhimovn,
mrhikey
);
revoke all on mrthisaf from public ; 
grant select on mrthisaf to public ; 
