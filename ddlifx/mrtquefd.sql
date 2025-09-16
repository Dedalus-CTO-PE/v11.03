create table mrtqueaf
(
  dmrqumes    char(20) default ' ' not null,
  mrmaurno    char(8) default ' ' not null,
  mrmadoty    char(3) default ' ' not null,
  mrmahloc    char(4) default ' ' not null,
  mrmavoln    decimal(2,0) default 0 not null,
  mrhidate    char(8) default ' ' not null,
  mrhitime    char(8) default ' ' not null,
  mrhiloc     char(4) default ' ' not null,
  mrhirecv    char(6) default ' ' not null,
  mrhireas    char(4) default ' ' not null,
  mrhioper    char(6) default ' ' not null,
  mrhiddue    char(8) default ' ' not null,
  mrhistat    char(1) default ' ' not null,
  mrhireqb    char(35) default ' ' not null,
  mrhiusid    char(10) default ' ' not null,
  mrhiextn    char(20) default ' ' not null,
  mrhipage    char(20) default ' ' not null,
  mrhahhos    char(3) default ' ' not null,
  mrquspar    char(29) default ' ' not null,
  lf          char(1)
);
create unique index mrtquea1 on mrtqueaf
(
dmrqumes
);
revoke all on mrtqueaf from public ; 
grant select on mrtqueaf to public ; 
