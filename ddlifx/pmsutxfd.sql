create table pmsutxaf
(
  pmuxurno    char(8) default ' ' not null,
  pmuxatyp    char(3) default ' ' not null,
  pmuxctyp    char(3) default ' ' not null,
  pmuxhfnd    char(6) default ' ' not null,
  pmuxhtab    char(3) default ' ' not null,
  pmuxexpd    char(8) default ' ' not null,
  pmuxcomt    char(3) default ' ' not null,
  pmuxnnum    char(6) default ' ' not null,
  pmuxlnum    char(3) default ' ' not null,
  pmuxcomm    char(100) default ' ' not null,
  pmuxspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index pmsutxa1 on pmsutxaf
(
pmuxurno,
pmuxatyp,
pmuxctyp,
pmuxhfnd,
pmuxhtab,
pmuxexpd,
pmuxcomt,
pmuxnnum,
pmuxlnum
);
revoke all on pmsutxaf from public ; 
grant select on pmsutxaf to public ; 
