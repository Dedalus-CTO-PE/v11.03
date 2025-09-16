create table deblinaf
(
  dblndeb     char(8) default ' ' not null,
  dblnna1     char(35) default ' ' not null,
  dblnna2     char(35) default ' ' not null,
  dblnad1     char(35) default ' ' not null,
  dblnad2     char(35) default ' ' not null,
  dblnad3     char(35) default ' ' not null,
  dblnad4     char(35) default ' ' not null,
  dblnpc      char(8) default ' ' not null,
  dblnph1     char(20) default ' ' not null,
  dblnph2     char(20) default ' ' not null,
  dblnph3     char(20) default ' ' not null,
  dblncon     char(30) default ' ' not null,
  dblnact     decimal(1,0) default 0 not null,
  dblnsta     decimal(1,0) default 0 not null,
  dblntex     decimal(1,0) default 0 not null,
  dblnter     char(3) default ' ' not null,
  dblnwrn     char(3) default ' ' not null,
  dblnlin     char(8) default ' ' not null,
  dblnpur     char(8) default ' ' not null,
  dblnbad     decimal(1,0) default 0 not null,
  dblnclm     decimal(14,2) default 0 not null,
  dblnur1     char(25) default ' ' not null,
  dblnur2     char(25) default ' ' not null,
  dblnud1     char(8) default ' ' not null,
  dblnud2     char(8) default ' ' not null,
  dblnuy1     char(1) default ' ' not null,
  dblnuy2     char(1) default ' ' not null,
  dblnuc1     char(3) default ' ' not null,
  dblnuc2     char(3) default ' ' not null,
  dblnuc3     char(3) default ' ' not null,
  dblnuc4     char(3) default ' ' not null,
  dblnspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index deblina1 on deblinaf
(
dblndeb
);
create unique index deblina2 on deblinaf
(
dblnna1,
dblndeb
);
revoke all on deblinaf from public ; 
grant select on deblinaf to public ; 
