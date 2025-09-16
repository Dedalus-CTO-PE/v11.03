create table ceatgmaf
(
  cetgcli     char(6) default ' ' not null,
  cetgspc     char(3) default ' ' not null,
  cetgpsc     char(7) default ' ' not null,
  cetgqty     decimal(8,2) default 0 not null,
  cetgspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceatgma1 on ceatgmaf
(
cetgcli,
cetgspc,
cetgpsc
);
revoke all on ceatgmaf from public ; 
grant select on ceatgmaf to public ; 
