create table watexdaf
(
wtxdnlv1    char(10),
wtxdnlv2    char(10),
wtxdnlv3    char(10),
wtxdnlv4    char(10),
wtxdnlep    decimal(6,0),
wtxdntl1    decimal(16,4),
wtxdnmn1    decimal(14,2),
wtxdnmx1    decimal(14,2),
wtxdnsv1    decimal(16,4),
wtxdntl2    decimal(16,4),
wtxdnmn2    decimal(14,2),
wtxdnmx2    decimal(14,2),
wtxdnsv2    decimal(16,4),
wtxdntl3    decimal(16,4),
wtxdnmn3    decimal(14,2),
wtxdnmx3    decimal(14,2),
wtxdnsv3    decimal(16,4),
wtxdnspa    char(39),
lf          char(1)
);
create unique index watexda1 on watexdaf
(
wtxdnlv1,
wtxdnlv2,
wtxdnlv3,
wtxdnlv4
);
revoke all on watexdaf from public ; 
grant select on watexdaf to public ; 
