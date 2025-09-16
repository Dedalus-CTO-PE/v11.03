create table patdfeaf
(
ptdfdcod    char(6),
ptdfpaid    char(1),
ptdfadmn    char(8),
ptdfmdam    decimal(14,2),
ptdfcoam    decimal(14,2),
ptdfadfe    decimal(14,2),
ptdfspar    char(16),
lf          char(1)
);
create unique index patdfea1 on patdfeaf
(
ptdfdcod,
ptdfpaid,
ptdfadmn
);
create unique index patdfea2 on patdfeaf
(
ptdfpaid,
ptdfdcod,
ptdfadmn
);
revoke all on patdfeaf from public ; 
grant select on patdfeaf to public ; 
