create table ccscebaf
(
  cceblv1     char(10) default ' ' not null,
  ccebnep     decimal(6,0) default 0 not null,
  ccebftc     decimal(16,4) default 0 not null,
  ccebfmn     decimal(14,2) default 0 not null,
  ccebfmx     decimal(14,2) default 0 not null,
  ccebfsv     decimal(16,4) default 0 not null,
  ccebttc     decimal(16,4) default 0 not null,
  ccebtmn     decimal(14,2) default 0 not null,
  ccebtmx     decimal(14,2) default 0 not null,
  ccebtsv     decimal(16,4) default 0 not null,
  cceblto     decimal(14,2) default 0 not null,
  cceblmn     decimal(14,2) default 0 not null,
  cceblmx     decimal(14,2) default 0 not null,
  cceblsv     decimal(16,4) default 0 not null,
  ccebspa     char(40) default ' ' not null,
  lf          char(1)
);
create unique index ccsceba1 on ccscebaf
(
cceblv1
);
revoke all on ccscebaf from public ; 
grant select on ccscebaf to public ; 
