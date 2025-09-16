create table legbokaf
(
  lobasite    char(6) default ' ' not null,
  lobaclin    char(6) default ' ' not null,
  lobadate    char(8) default ' ' not null,
  lobastrt    char(5) default ' ' not null,
  dlobaslo    char(3) default ' ' not null,
  lobatime    char(5) default ' ' not null,
  lobactyp    char(6) default ' ' not null,
  dlobaurn    char(8) default ' ' not null,
  lobavisi    char(3) default ' ' not null,
  dlobaout    char(8) default ' ' not null,
  dlobasta    char(1) default ' ' not null,
  lobaday     decimal(1,0) default 0 not null,
  lobaexsl    decimal(3,0) default 0 not null,
  lobafins    char(4) default ' ' not null,
  lobalock    char(2) default ' ' not null,
  lobapxra    decimal(1,0) default 0 not null,
  lobabkdt    char(16) default ' ' not null,
  lobapull    decimal(1,0) default 0 not null,
  lobasess    char(3) default ' ' not null,
  lobadisc    char(3) default ' ' not null,
  dlotbare    char(2) default ' ' not null,
  lobaspar    char(31) default ' ' not null,
  lf          char(1)
);
create unique index legboka1 on legbokaf
(
lobasite,
lobaclin,
lobadate,
lobastrt,
dlobaslo
);
create unique index legboka2 on legbokaf
(
lobasite,
lobactyp,
dlobasta,
lobadate,
lobastrt,
dlobaslo,
lobaclin
);
create unique index legboka3 on legbokaf
(
dlobaurn,
lobadate,
lobastrt,
dlobaslo,
lobasite,
lobaclin
);
create unique index legboka4 on legbokaf
(
lobasite,
lobactyp,
lobaclin,
dlobasta,
lobadate,
lobastrt,
dlobaslo
);
create unique index legboka5 on legbokaf
(
lobasite,
lobactyp,
lobadate,
lobastrt,
lobaclin,
dlobasta,
dlobaslo
);
revoke all on legbokaf from public ; 
grant select on legbokaf to public ; 
