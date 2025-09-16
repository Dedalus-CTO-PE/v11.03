create table patmerch
(
mercode     char(3),
msummno     char(12),
msumdate    char(8),
mamtclm     decimal(14,2),
mamtpaid    decimal(14,2),
mcommiss    decimal(14,2),
mjournal    decimal(14,2),
lf          char(1)
);
create unique index patmerc1 on patmerch
(
mercode,
msummno
);
revoke all on patmerch from public ; 
grant select on patmerch to public ; 
