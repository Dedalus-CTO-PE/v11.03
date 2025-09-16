create table ceatdmaf
(
  cetddty     char(3) default ' ' not null,
  cetdspc     char(3) default ' ' not null,
  cetdpsc     char(7) default ' ' not null,
  cetdstm     decimal(2,0) default 0 not null,
  cetdetm     decimal(2,0) default 0 not null,
  cetdspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceatdma1 on ceatdmaf
(
cetddty,
cetdspc,
cetdpsc
);
revoke all on ceatdmaf from public ; 
grant select on ceatdmaf to public ; 
