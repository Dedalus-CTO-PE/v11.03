create table pmserdaf
(
  pmedftid    varchar2(24) default ' ' not null,
  pmedradv    varchar2(30) default ' ' not null,
  pmedpnum    varchar2(4) default ' ' not null,
  pmedtrid    varchar2(24) default ' ' not null,
  pmedarid    varchar2(20) default ' ' not null,
  pmedbamt    varchar2(9) default ' ' not null,
  pmedccod    varchar2(3) default ' ' not null,
  pmedldat    varchar2(8) default ' ' not null,
  pmedpari    varchar2(20) default ' ' not null,
  pmedptid    varchar2(24) default ' ' not null,
  pmedstat    varchar2(1) default ' ' not null,
  pmedltyp    varchar2(2) default ' ' not null,
  pmedspar    varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmserda1 primary key( 
pmedftid,
pmedradv,
pmedpnum,
pmedtrid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmserda2 on pmserdaf
(
pmedtrid,
pmedftid,
pmedradv,
pmedpnum
)
  tablespace pas_indx; 
