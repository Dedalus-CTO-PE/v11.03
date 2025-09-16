create table oprwcnaf
(
  opwceffd    char(8) default ' ' not null,
  opwcunit    char(3) default ' ' not null,
  opwcweek    char(2) default ' ' not null,
  opwccdat    char(8) default ' ' not null,
  opwcctim    char(8) default ' ' not null,
  opwccuid    char(10) default ' ' not null,
  opwcspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index oprwcna1 on oprwcnaf
(
opwceffd,
opwcunit
);
create unique index oprwcna2 on oprwcnaf
(
opwcunit,
opwceffd
);
revoke all on oprwcnaf from public ; 
grant select on oprwcnaf to public ; 
