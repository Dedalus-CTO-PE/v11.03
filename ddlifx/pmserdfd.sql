create table pmserdaf
(
  pmedftid    char(24) default ' ' not null,
  pmedradv    char(30) default ' ' not null,
  pmedpnum    char(4) default ' ' not null,
  pmedtrid    char(24) default ' ' not null,
  pmedarid    char(20) default ' ' not null,
  pmedbamt    char(9) default ' ' not null,
  pmedccod    char(3) default ' ' not null,
  pmedldat    char(8) default ' ' not null,
  pmedpari    char(20) default ' ' not null,
  pmedptid    char(24) default ' ' not null,
  pmedstat    char(1) default ' ' not null,
  pmedltyp    char(2) default ' ' not null,
  pmedspar    char(18) default ' ' not null,
  lf          char(1)
);
create unique index pmserda1 on pmserdaf
(
pmedftid,
pmedradv,
pmedpnum,
pmedtrid
);
create unique index pmserda2 on pmserdaf
(
pmedtrid,
pmedftid,
pmedradv,
pmedpnum
);
revoke all on pmserdaf from public ; 
grant select on pmserdaf to public ; 
