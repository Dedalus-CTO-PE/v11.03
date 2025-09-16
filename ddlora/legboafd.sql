create table legbokaf
(
  lobasite    varchar2(6) default ' ' not null,
  lobaclin    varchar2(6) default ' ' not null,
  lobadate    varchar2(8) default ' ' not null,
  lobastrt    varchar2(5) default ' ' not null,
  dlobaslo    varchar2(3) default ' ' not null,
  lobatime    varchar2(5) default ' ' not null,
  lobactyp    varchar2(6) default ' ' not null,
  dlobaurn    varchar2(8) default ' ' not null,
  lobavisi    varchar2(3) default ' ' not null,
  dlobaout    varchar2(8) default ' ' not null,
  dlobasta    varchar2(1) default ' ' not null,
  lobaday     number(1,0) default 0 not null,
  lobaexsl    number(3,0) default 0 not null,
  lobafins    varchar2(4) default ' ' not null,
  lobalock    varchar2(2) default ' ' not null,
  lobapxra    number(1,0) default 0 not null,
  lobabkdt    varchar2(16) default ' ' not null,
  lobapull    number(1,0) default 0 not null,
  lobasess    varchar2(3) default ' ' not null,
  lobadisc    varchar2(3) default ' ' not null,
  dlotbare    varchar2(2) default ' ' not null,
  lobaspar    varchar2(31) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legboka1 primary key( 
lobasite,
lobaclin,
lobadate,
lobastrt,
dlobaslo)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index legboka2 on legbokaf
(
lobasite,
lobactyp,
dlobasta,
lobadate,
lobastrt,
dlobaslo,
lobaclin
)
  tablespace pas_indx; 
create unique index legboka3 on legbokaf
(
dlobaurn,
lobadate,
lobastrt,
dlobaslo,
lobasite,
lobaclin
)
  tablespace pas_indx; 
create unique index legboka4 on legbokaf
(
lobasite,
lobactyp,
lobaclin,
dlobasta,
lobadate,
lobastrt,
dlobaslo
)
  tablespace pas_indx; 
create unique index legboka5 on legbokaf
(
lobasite,
lobactyp,
lobadate,
lobastrt,
lobaclin,
dlobasta,
dlobaslo
)
  tablespace pas_indx; 
