create table watexcaf
(
wtxcnlv1    char(10),
wtxcnlv2    char(10),
wtxcnlv3    char(10),
wtxcnlep    decimal(6,0),
wtxcntl1    decimal(16,4),
wtxcnmn1    decimal(14,2),
wtxcnmx1    decimal(14,2),
wtxcnsv1    decimal(16,4),
wtxcntl2    decimal(16,4),
wtxcnmn2    decimal(14,2),
wtxcnmx2    decimal(14,2),
wtxcnsv2    decimal(16,4),
wtxcntl3    decimal(16,4),
wtxcnmn3    decimal(14,2),
wtxcnmx3    decimal(14,2),
wtxcnsv3    decimal(16,4),
wtxcnspa    char(39),
lf          char(1)
);
create unique index watexca1 on watexcaf
(
wtxcnlv1,
wtxcnlv2,
wtxcnlv3
);
revoke all on watexcaf from public ; 
grant select on watexcaf to public ; 
