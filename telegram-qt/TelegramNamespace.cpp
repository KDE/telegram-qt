/*
   Copyright (C) 2014-2015 Alexandr Akulich <akulichalexander@gmail.com>

   This file is a part of TelegramQt library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

 */

#include "TelegramNamespace.hpp"

#include <QMetaType>
#include <QDebug>

void TelegramNamespace::registerTypes()
{
    static bool registered = false;
    if (!registered) {

#ifdef DEVELOPER_BUILD
        qDebug() << "TelegramQt Developer build";
#endif

        qRegisterMetaType<TelegramNamespace::ConnectionState>("TelegramNamespace::ConnectionStatus");
        qRegisterMetaType<TelegramNamespace::ContactStatus>("TelegramNamespace::ContactStatus");
        qRegisterMetaType<TelegramNamespace::MessageDeliveryStatus>("TelegramNamespace::MessageDeliveryStatus");
        qRegisterMetaType<TelegramNamespace::MessageFlags>("TelegramNamespace::MessageFlags");
        qRegisterMetaType<TelegramNamespace::MessageType>("TelegramNamespace::MessageType");
        qRegisterMetaType<TelegramNamespace::AuthSignError>("TelegramNamespace::AuthSignError");
        registered = true;
    }
}
